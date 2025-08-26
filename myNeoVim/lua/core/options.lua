local opt = vim.opt

--显示行号
opt.relativenumber = true
opt.number = true

--光标行
opt.cursorline = true

--启用鼠标
opt.mouse:append("a")

--系统剪贴板
opt.clipboard:append("unnamedplus")

opt.termguicolors = true
