namespace {
struct Record { unsigned char storage[332]; };
}

extern "C" Record* fn_030ff3bc(Record* records, unsigned index) {
    if (index >= 512u)
        return records;
    return records + index;
}
