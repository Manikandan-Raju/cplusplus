FROM ubuntu
RUN apt-get update
RUN apt install python3 -y
RUN apt install python3-pip -y
RUN apt install libcppunit-dev -y
RUN apt install python3-venv -y
CMD echo “Hello World”
COPY . /workspaces/project
RUN chmod 755 /workspaces/project/entrypoint.sh
ENTRYPOINT ["bash","/workspaces/project/entrypoint.sh"]