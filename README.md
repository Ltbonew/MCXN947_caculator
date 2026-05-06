# MCXN947_caculator
基于MCXN947做的计算器，参考numworks(https://github.com/numworks/epsilon.git)做的

# 对比
## numworks
- ion：硬件抽象层（HAL），提供对底层设备（显示、键盘、闪存、定时器等）的抽象接口
- kandinsky：2D 图形库，负责像素绘制、字体渲染等
- poincare：数学引擎，负责表达式解析、化简、求值和符号计算
- python：MicroPython 解释器集成，实现 Python 计算功能
- apps：内置应用程序（如计算器、函数绘图、表格等）
- escher：GUI图形控件库
  - Escher 决定“画什么、在哪画、何时重画、如何响应按键”
  - Kandinsky 负责“把 Escher 要画的东西真正画成像素”

## 俺自己的
- ion：硬件用的MCXN947
- lvgl: 图形库，负责像素绘制、字体渲染等
  - Calculation           - 计算
  - Grapher               - 绘图
  - Equations             - 方程
  - Statistics            - 统计
  - Regression            - 回归
  - Sequences             - 数列
  - Distributions         - 分布    
  - Inference             - 推断
  - Finance               - 金融
  - Elements              - 元素
  - Python                - Python
  - Settings              - 设置
- poincare：数学引擎，负责表达式解析、化简、求值和符号计算。
- python：MicroPython 解释器集成，实现 Python 计算功能。
- apps：内置应用程序（如计算器、函数绘图、表格等）

# 学习进度
## lvgl库添加 9.6版本
