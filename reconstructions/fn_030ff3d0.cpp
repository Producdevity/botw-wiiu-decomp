namespace {
struct Record { unsigned char storage[92]; };
}

extern "C" Record* fn_030ff3d0(Record* records, unsigned index) {
    if (index >= 16u)
        return records;
    return records + index;
}
