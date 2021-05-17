#ifndef TREETABLELIB_TTREEMAP_H
#define TREETABLELIB_TTREEMAP_H

#include <queue>
#include "TTreeNode.h"
#include "TTreeMapIter.h"

template <class TK, class TV>
class TTreeMap {
protected:
    TTreeNode<TK, TV> *root;
    int count;

public:
    TTreeMap();
    TTreeMap(const TTreeMap<TK,TV> &p);
    virtual ~TTreeMap();

    virtual TV &operator[](TK i);

    virtual TV Find(TK k);
    virtual void Delete(TK k);
    virtual void Add(TK k, TV v);
    virtual int GetCount();

    typedef TTreeMapIter<TK, TV> iterator;
    iterator Begin();
    friend class TTreeMapIter<TK, TV>;
};
#endif 
