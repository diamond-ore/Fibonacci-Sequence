void main() {
  int a = 0;
  int b = 1;
  for (int i = 0; i < 10; i++) {
    print('${a}');
    b = b + a;
    a = b - a;
  }
}