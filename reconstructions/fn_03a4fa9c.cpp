extern "C" void fn_03a4fa9c(int *self, int count, int data) {
    if (count <= 0)
        return;
    if (data == 0)
        return;
    self[1] = count;
    self[2] = data;
    self[0] = 0;
}
