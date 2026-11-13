namespace {
struct Record { unsigned char storage[292]; };
}

extern "C" Record* fn_030ff47c(Record* records, unsigned index) {
    if (index >= 6000u)
        return records;
    return records + index;
}
