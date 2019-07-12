/*
  把0~15的数转换成等价的十六进制的字符形式
*/
char
digit_to_hex_char(int digit)
{
  return "0123456789ABCDEF"[digit];
}
