/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSHTMLOptionsCollection_H
#define JSHTMLOptionsCollection_H

#include "JSHTMLCollection.h"

namespace WebCore {

class HTMLOptionsCollection;

class JSHTMLOptionsCollection : public JSHTMLCollection {
public:
    JSHTMLOptionsCollection(KJS::ExecState*, HTMLOptionsCollection*);
    virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
    virtual void put(KJS::ExecState*, const KJS::Identifier&, KJS::JSValue*, int attr = KJS::None);
    void putValueProperty(KJS::ExecState*, int, KJS::JSValue*, int attr);
    virtual const KJS::ClassInfo* classInfo() const { return &info; }
    static const KJS::ClassInfo info;

    enum {
        // Attributes
        SelectedIndexAttrNum, LengthAttrNum, 

        // Functions
        AddFuncNum
    };

    // Custom attributes
    KJS::JSValue* length(KJS::ExecState*) const;
    void setLength(KJS::ExecState*, KJS::JSValue*);
    void indexSetter(KJS::ExecState*, unsigned index, KJS::JSValue*, int attr);
    HTMLOptionsCollection* impl() const;
};

HTMLOptionsCollection* toHTMLOptionsCollection(KJS::JSValue*);

class JSHTMLOptionsCollectionPrototype : public KJS::JSObject {
public:
    static KJS::JSObject* self(KJS::ExecState* exec);
    virtual const KJS::ClassInfo* classInfo() const { return &info; }
    static const KJS::ClassInfo info;
    bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    JSHTMLOptionsCollectionPrototype(KJS::ExecState* exec)
        : KJS::JSObject(JSHTMLCollectionPrototype::self(exec)) { }
};

class JSHTMLOptionsCollectionPrototypeFunction : public KJS::InternalFunctionImp {
public:
    JSHTMLOptionsCollectionPrototypeFunction(KJS::ExecState* exec, int i, int len, const KJS::Identifier& name)
        : KJS::InternalFunctionImp(static_cast<KJS::FunctionPrototype*>(exec->lexicalInterpreter()->builtinFunctionPrototype()), name)
        , id(i)
    {
        put(exec, exec->propertyNames().length, KJS::jsNumber(len), KJS::DontDelete|KJS::ReadOnly|KJS::DontEnum);
    }
    virtual KJS::JSValue* callAsFunction(KJS::ExecState*, KJS::JSObject*, const KJS::List&);

private:
    int id;
};

} // namespace WebCore

#endif