#include "botw/bounded_record_lookup.h"

extern "C" const unsigned char* fn_0300d8d4(const void* owner, unsigned int index) {
    const bounded_record_lookup::RecordTables* tables =
        static_cast<const bounded_record_lookup::RecordTables*>(owner);
    typedef bounded_record_lookup::KeyRecord KeyRecord;
    const bounded_record_lookup::RecordArray<KeyRecord>& array = tables->keys;
    unsigned int offset = array.count;
    unsigned long records = reinterpret_cast<unsigned long>(array.records);
    if (index < offset) {
        offset = index * sizeof(KeyRecord);
        records += offset;
    }
    return reinterpret_cast<const KeyRecord*>(records)->key;
}
