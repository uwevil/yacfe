static unsigned char ext2_filetype_table[EXT2_FT_MAX] = {
 	[EXT2_FT_UNKNOWN]	DT_UNKNOWN,
	[EXT2_FT_REG_FILE]	DT_REG,
	[EXT2_FT_DIR]		DT_DIR,
	[EXT2_FT_CHRDEV]	DT_CHR,
	[EXT2_FT_BLKDEV]	DT_BLK,
	[EXT2_FT_FIFO]		DT_FIFO,
	[EXT2_FT_SOCK]		DT_SOCK,
	[EXT2_FT_SYMLINK]	DT_LNK,
};


char *ioctl_names[CM_IOC_MAXNR + 1] = {
  [_IOC_NR(CM_IOCGSTATUS)] "CM_IOCGSTATUS",
  [_IOC_NR(CM_IOCGATR)] "CM_IOCGATR",
  [_IOC_NR(CM_IOCARDOFF)] "CM_IOCARDOFF",
  [_IOC_NR(CM_IOCSPTS)] "CM_IOCSPTS",
  [_IOC_NR(CM_IOSDBGLVL)] "CM4000_DBGLVL",
  [EXT2_FT_UNKNOWN]	DT_UNKNOWN,
};



