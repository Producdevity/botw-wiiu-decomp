namespace {
struct Record { unsigned char storage[292]; };
}

extern "C" Record* fn_037cafac(Record* records, unsigned index) {
    if (index >= 6000u)
        return records;
    return records + index;
}
