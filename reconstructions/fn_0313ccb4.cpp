namespace {
struct Record { unsigned char storage[12]; };
}

extern "C" Record* fn_0313ccb4(Record* records, unsigned index) {
    if (index >= 2u)
        return records;
    return records + index;
}
