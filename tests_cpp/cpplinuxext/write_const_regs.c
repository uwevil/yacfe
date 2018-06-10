static int hv7131d_init(struct sn9c102_device* cam)
{
 	err = sn9c102_write_const_regs(cam, {0x00, 0x10}, {0x00, 0x11},
				       {0x00, 0x14}, {0x60, 0x17},
				       {0x0e, 0x18}, {0xf2, 0x19});

	return err;
}

int main(int i)
{
}
