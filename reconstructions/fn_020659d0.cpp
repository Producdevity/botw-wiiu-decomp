namespace {
struct Record { unsigned char storage[48]; };
}

extern "C" Record* fn_020659d0(Record* records, unsigned index) {
    if (index >= 4u)
        return records;
    return records + index;
}
