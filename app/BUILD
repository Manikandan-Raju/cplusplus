load("@rules_cc//cc:defs.bzl", "cc_library","cc_binary")

cc_library(
    name = "uniform_initialization",
    srcs = ["src/uniform_initialization.cpp"],
    hdrs = ["include/uniform_initialization.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "datatypes",
    srcs = ["src/datatypes.cpp"],
    hdrs = ["include/datatypes.h"],
    visibility = ["//visibility:public"],
)


cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    deps = [":uniform_initialization",
            ":datatypes"],
    visibility = ["//visibility:public"],
)