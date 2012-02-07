static uint16_t atxy(byte x, byte y)
{
  return RAM_PIC + 64 * y + x;
}

static void draw_red_time(uint16_t dst, long n)
{
  GD.wr(dst + 0, BG_RZERO + (n / 10000) % 10);
  GD.wr(dst + 1, BG_RZERO + (n / 1000) % 10);
  GD.wr(dst + 3, BG_RZERO + (n / 100) % 10);
  GD.wr(dst + 4, BG_RZERO + (n / 10) % 10);
  GD.wr(dst + 5, BG_RZERO + n % 10);
}

static void draw_red_speed(uint16_t dst, long n)
{
  GD.wr(dst + 0, BG_RZERO + (n / 100) % 10);
  GD.wr(dst + 1, BG_RZERO + (n / 10) % 10);
  GD.wr(dst + 2, BG_RZERO + n % 10);
}

static void draw_cyan_time(uint16_t dst, long n)
{
  GD.wr(dst + 0, BG_CZERO + (n / 10000) % 10);
  GD.wr(dst + 1, BG_CZERO + (n / 1000) % 10);
  GD.wr(dst + 3, BG_CZERO + (n / 100) % 10);
  GD.wr(dst + 4, BG_CZERO + (n / 10) % 10);
  GD.wr(dst + 5, BG_CZERO + n % 10);
}

static void draw_cyan_speed(uint16_t dst, long n)
{
  GD.wr(dst + 0, BG_CZERO + (n / 100) % 10);
  GD.wr(dst + 1, BG_CZERO + (n / 10) % 10);
  GD.wr(dst + 2, BG_CZERO + n % 10);
}
