# 目录介绍
```
├── include   // 项目头文件   
├── lib       // 项目编译输出的静态库
├── src       // 项目源码
└── test      // 单元测试目录
```

# demo说明
本demo代码修改自项目[gtest-cmake-example](https://github.com/dmonopoly/gtest-cmake-example)，主要做了源码和测试代码(ut)的解耦分离。用以说明UT和源码的关系。

# 运行
编译src输出可执行文件和静态库(UT需要):
```
cd src
mkdir build & cd build
cmake ../
make
```

编译&运行单元测试:
```
cd test
mkdir build & cd build
cmake ..
make        // 同时会编译UT依赖的gtest静态库
make test   // 运行UT
```
