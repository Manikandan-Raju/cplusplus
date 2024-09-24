curl -LO "https://github.com/bazelbuild/bazelisk/releases/download/v1.1.0/bazelisk-darwin-amd64"
mkdir -p "$HOME/bin/"
mv bazelisk-darwin-amd64 "$HOME/bin/bazel"
chmod +x "$HOME/bin/bazel"
export PATH=$PATH:"$HOME/bin"
bazel version
bazel query //...