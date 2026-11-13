namespace {
struct Record { unsigned char storage[220]; };
}

extern "C" Record* fn_03300458(Record* records, unsigned index) {
    if (index >= 6u)
        return records;
    return records + index;
}
