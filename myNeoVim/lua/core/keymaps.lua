vim.g.mapleader = " "

local keymap = vim.keymap

---------------视觉模式---------------
--单行或多行移动
keymap.set("v", "J", ":m '>+1<CR>gv=gv")
keymap.set("v", "K", ":m '<-2<CR>gv=gv")

---------------正常模式---------------
--窗口操作
keymap.set("n", "gv", "<C-w>v") --垂直分割窗口
keymap.set("n", "gh", "<C-w>s") --水平分割窗口
keymap.set("n", "go", ":only<CR>") --关闭当前窗口的所有窗口
keymap.set("n", "gx", ":close<CR>") --关闭当前窗口

--取消高亮
keymap.set("n", "<leader>nh", ":nohl<CR>")

--切换NvimTree
keymap.set("n", "<leader>nt", ":NvimTreeToggle<CR>")
