local config = {
  options = {
    mode = "tabs",
    themable = true,
    numbers = "ordinal",
  }
}

return {
	'akinsho/bufferline.nvim', 
	version = "*", 
	dependencies = 'nvim-tree/nvim-web-devicons',
	config = function()
    require('bufferline').setup(config)
	end,
}
