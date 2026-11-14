namespace {
struct EntryView {
    short status;
    unsigned char reserved[6];
    void* value;
    unsigned char trailing[16];
};
struct TableView {
    unsigned char reserved[48];
    unsigned count;
    EntryView* entries;
    const EntryView* at(unsigned index) const {
        return index < count ? entries + index : entries;
    }
};
typedef char EntryStride[sizeof(EntryView) == 28 ? 1 : -1];
}

extern "C" void* fn_02017840(void* context, unsigned index) {
    const TableView* table = static_cast<const TableView*>(context);
    const EntryView* entry = table->at(index);
    if (entry->status != 3)
        return 0;
    return entry->value;
}
