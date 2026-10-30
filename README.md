# 高级语言程序设计实验

姓名：卫金男  
学号：2024301051244  
专业：人工智能专业

## 实验03：函数的定义、调用与调试

实验日期：2026年10月25日。

本次实验练习函数定义与调用、引用参数、函数重载、默认参数、内联函数和递归，并在 Visual Studio 中观察参数传递、局部变量和调用栈。

### 内容入口

- [实验报告 PDF](experiments/03-functions/report/函数的定义、调用与调试_卫金男_2024301051244.pdf)
- [实验报告 Word](experiments/03-functions/report/函数的定义、调用与调试_卫金男_2024301051244.docx)
- [独立源码](experiments/03-functions/src)
- [Visual Studio 项目](experiments/03-functions/VisualStudio项目)

源码包含7个课堂练习、5个教材练习和1个兔子数量补充题，共13个正常程序；另有6个独立诊断示例，用于观察参数和默认参数使用错误。

### 在 Visual Studio 中打开

1. 打开 `experiments/03-functions/VisualStudio项目/函数实验_13题.sln`。
2. 选择 `Debug | x64`，右键需要运行的项目，选择“设为启动项目”。每个项目各有自己的 `main`，应逐题运行。
3. 按 `Ctrl+F5` 编译并运行；需要输入的程序，可按该项目 `input.txt` 中的样例输入。
4. 调试时在需要观察的代码行设置断点，按 `F5` 启动，使用 `F10` 逐过程、`F11` 逐语句，并查看“局部变量”和“调用堆栈”。

项目使用 Visual Studio 2026 的 MSVC v145、VC Tools 14.51.36231、Windows SDK 10.0，语言标准为 C++17，源码按 UTF-8 编译。其他版本的开发环境可能需要相应的工具集才能打开并生成。

仓库不包含个人 `.vcxproj.user` 调试参数。各正常项目的 `output.txt` 保存的是本次实验中已由 Visual Studio 实际运行生成的标准输出，报告中对此有说明；它们用于查看已有结果，未因整理仓库而重新运行。

### 诊断示例

`VisualStudio项目/diagnostics` 下的项目与正常练习分开。`01_fact_string`、`02_fact_missing`、`03_fact_extra`、`05_default_not_trailing` 和 `06_default_middle_omitted` 故意设置了错误，预期编译失败；`04_fact_double` 用于观察 `double` 转 `int` 的 C4244 警告，预期仍可运行。正常13题解决方案不包含这些反例。

### 兔子数量补充题

兔子题按教师更正要求，在 `main` 中使用循环和变量替换逐月计算，不使用递归或单独的求解函数。先输出当月数量，再由前两个月的对数得到下一月；第20个月为6765对、13530只。
