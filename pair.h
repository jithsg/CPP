#pragma once

template<typename T1, typename T2>
class Pair{
    private:
        T1 mfirst;
        T2 msecond;
    public:
        Pair(const T1& first, const T2& second);
        T1 getFirst() const;
        T2 getSecond() const;
        void setFirst(const T1& first);
        void setSecond(const T2& second);
};


template<typename T1, typename T2>
Pair<T1, T2>::Pair(const T1& first, const T2& second): mfirst(first), msecond(second){};

template<typename T1, typename T2>
T1 Pair<T1, T2>::getFirst() const{
    return mfirst;
}

template<typename T1, typename T2>
 T2 Pair<T1, T2>::getSecond() const {
    return msecond;
}


template<typename T1, typename T2>
void Pair<T1, T2>::setFirst(const T1& first){
    mfirst = first;
}

template<typename T1, typename T2>
void Pair<T1, T2>::setSecond(const T2& second){
    msecond = second;
}