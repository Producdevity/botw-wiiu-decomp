extern "C" signed char fn_03a82028(int, int);

extern "C" void fn_03b4aac4(void* arg0, int arg1) {
    (*(signed char*)arg0) = fn_03a82028(arg1, 0);
    (*(signed char*)((char*)arg0 + 1)) = fn_03a82028(arg1, 1);
    (*(signed char*)((char*)arg0 + 2)) = fn_03a82028(arg1, 2);
    (*(signed char*)((char*)arg0 + 3)) = fn_03a82028(arg1, 3);
}
