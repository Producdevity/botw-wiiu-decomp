struct StateRecord {
    int state;
};

struct StateRecordRef {
    StateRecord* record;
};

extern "C" bool fn_0378c788(const StateRecordRef* ref) {
    StateRecord* record = ref->record;
    return record != 0 && record->state == 2;
}
