struct FlagIndex {
    int value;
};
typedef char FlagIndexSize[sizeof(FlagIndex) == 4 ? 1 : -1];

struct FlagWords {
    unsigned char unknown[0x48];
    unsigned words[2];
};

extern "C" unsigned fn_0332ebe4(FlagIndex flag);
extern "C" unsigned fn_0332ec0c(FlagIndex flag);
extern "C" bool fn_034c9b08(FlagWords* flags, unsigned word, FlagIndex flag);

extern "C" void fn_034c9b4c(FlagWords* flags, FlagIndex flag) {
    int first = 0;
    unsigned word = fn_0332ebe4(flag);
    if (fn_034c9b08(flags, word, flag)) {
        unsigned mask = fn_0332ec0c(flag);
        unsigned* target = &flags->words[first];
        if (word < 2)
            target = &flags->words[word];
        *target |= mask;
    }
}
