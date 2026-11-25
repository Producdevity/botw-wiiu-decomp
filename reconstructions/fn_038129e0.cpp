extern "C" int fn_038124d8(int, int);
extern "C" int fn_03821b08(void);
extern "C" int fn_03821b64(void);
extern "C" int fn_038140fc(char*, const char*, ...);
extern "C" int fn_03812870(int, char*);
extern "C" const char data_10321db8[];

extern "C" int fn_038129e0(int a, int b) {
    char buffer[264];
    fn_038124d8(a, b);
    fn_038124d8(a, fn_03821b08());
    int value = fn_03821b64();
    if (value == 0) {
        return -1;
    }
    fn_038140fc(buffer, data_10321db8, value);
    return fn_03812870(a, buffer);
}
