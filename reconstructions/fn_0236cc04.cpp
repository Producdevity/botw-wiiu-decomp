extern "C" float data_10090fe0;
extern "C" int fn_0236cb50();

extern "C" int fn_0236cc04(void* arg0) {
    if (!((*(float*)((char*)arg0 + 104)) > data_10090fe0) || !((*(float*)((char*)arg0 + 116)) > data_10090fe0) || !((*(float*)((char*)arg0 + 128)) > data_10090fe0) || (fn_0236cb50() != 0)) {
        return 1;
    }
    return 0;
}
