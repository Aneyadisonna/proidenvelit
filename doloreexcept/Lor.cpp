    HRESULT STDMETHODCALLTYPE Method16(int param1, BSTR param2) override {
        wprintf(L"Method16 called with param1: %d, param2: %s\n", param1, param2);
        return S_OK;
    }
    