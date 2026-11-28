namespace {
struct Values {
    signed char first;
    signed char second;
    signed char third;
    signed char fourth;
};
}

extern "C" signed char fn_03a82028(int, int);

extern "C" void fn_03b4aac4(void* values, int index) {
    ((Values *) values)->first = fn_03a82028(index, 0);
    ((Values *) values)->second = fn_03a82028(index, 1);
    ((Values *) values)->third = fn_03a82028(index, 2);
    ((Values *) values)->fourth = fn_03a82028(index, 3);
}
