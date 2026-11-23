namespace {
struct FloatSlotTable {
    unsigned char unknown_0[0xa8];
    unsigned value_count;
    float* values;
    signed char slots[67];

    signed char* slot_at(unsigned index) {
        if (index < 67)
            return &slots[index];
        return &slots[0];
    }

    signed char& slot(unsigned index) { return *slot_at(index); }

    float& value(int index) {
        if ((unsigned)index < value_count)
            return values[index];
        return values[0];
    }
};
typedef char FloatSlotTableSize[sizeof(FloatSlotTable) == 0xf4 ? 1 : -1];
}

extern "C" bool fn_03713060(void* table, unsigned index, float value, int unused) {
    int slot = static_cast<FloatSlotTable*>(table)->slot(index);
    int position = slot;
    if (position >= 0) {
        static_cast<FloatSlotTable*>(table)->value(slot) = value;
        return true;
    }
    return false;
}
