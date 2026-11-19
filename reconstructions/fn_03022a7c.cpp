#include "botw/bounded_record_lookup.h"

extern "C" const void* fn_03022a7c(const void* owner, unsigned int index) {
    const bounded_record_lookup::RecordTables* tables =
        static_cast<const bounded_record_lookup::RecordTables*>(owner);
    typedef bounded_record_lookup::ValueRecord ValueRecord;
    const bounded_record_lookup::RecordArray<ValueRecord>& array = tables->values;
    unsigned int offset = array.count;
    unsigned long records = reinterpret_cast<unsigned long>(array.records);
    if (index < offset) {
        offset = index * sizeof(ValueRecord);
        records += offset;
    }
    return reinterpret_cast<const ValueRecord*>(records)->value;
}
