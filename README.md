# CPP-STARTER

A cmake based project setup to get you going right away.

Provides unit testing with Catch2 (as git-submodule) and reasonable warning
settings by default.

```
├── .gitignore
├── .gitmodules
├── CMakeLists.txt
├── compile_commands.json
├── src
│   ├── app
│   │   ├── CMakeLists.txt
│   │   └── main.cpp
│   ├── CMakeLists.txt
│   └── mylib
│       ├── CMakeLists.txt
│       ├── include
│       │   └── mylib
│       │       └── mylib.h
│       ├── src
│       │   └── mylib.cpp
│       └── test
│           └── mylibtest.cpp
└── third_party
    ├── Catch2
    └── CMakeLists.txt
```

The git history is intentionally limited to one commit.
