namespace {
struct Record { unsigned char storage[12]; };
}

extern "C" Record* fn_030ff468(Record* records, unsigned index) {
    if (index >= 6u)
        return records;
    return records + index;
}
