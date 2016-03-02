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

#include "config.h"


#if ENABLE(SVG)

#include "SVGElement.h"
#include "JSSVGGradientElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "SVGGradientElement.h"

#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGGradientElement)

/* Hash table */

static const HashTableValue JSSVGGradientElementTableValues[9] =
{
    { "gradientUnits", DontDelete|ReadOnly, (intptr_t)jsSVGGradientElementGradientUnits, (intptr_t)0 },
    { "gradientTransform", DontDelete|ReadOnly, (intptr_t)jsSVGGradientElementGradientTransform, (intptr_t)0 },
    { "spreadMethod", DontDelete|ReadOnly, (intptr_t)jsSVGGradientElementSpreadMethod, (intptr_t)0 },
    { "href", DontDelete|ReadOnly, (intptr_t)jsSVGGradientElementHref, (intptr_t)0 },
    { "externalResourcesRequired", DontDelete|ReadOnly, (intptr_t)jsSVGGradientElementExternalResourcesRequired, (intptr_t)0 },
    { "className", DontDelete|ReadOnly, (intptr_t)jsSVGGradientElementClassName, (intptr_t)0 },
    { "style", DontDelete|ReadOnly, (intptr_t)jsSVGGradientElementStyle, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsSVGGradientElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGGradientElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 15, JSSVGGradientElementTableValues, 0 };
#else
    { 16, 15, JSSVGGradientElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGGradientElementConstructorTableValues[5] =
{
    { "SVG_SPREADMETHOD_UNKNOWN", DontDelete|ReadOnly, (intptr_t)jsSVGGradientElementSVG_SPREADMETHOD_UNKNOWN, (intptr_t)0 },
    { "SVG_SPREADMETHOD_PAD", DontDelete|ReadOnly, (intptr_t)jsSVGGradientElementSVG_SPREADMETHOD_PAD, (intptr_t)0 },
    { "SVG_SPREADMETHOD_REFLECT", DontDelete|ReadOnly, (intptr_t)jsSVGGradientElementSVG_SPREADMETHOD_REFLECT, (intptr_t)0 },
    { "SVG_SPREADMETHOD_REPEAT", DontDelete|ReadOnly, (intptr_t)jsSVGGradientElementSVG_SPREADMETHOD_REPEAT, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGGradientElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 7, JSSVGGradientElementConstructorTableValues, 0 };
#else
    { 8, 7, JSSVGGradientElementConstructorTableValues, 0 };
#endif

class JSSVGGradientElementConstructor : public DOMObject {
public:
    JSSVGGradientElementConstructor(ExecState* exec)
        : DOMObject(JSSVGGradientElementConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSSVGGradientElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValuePtr proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSSVGGradientElementConstructor::s_info = { "SVGGradientElementConstructor", 0, &JSSVGGradientElementConstructorTable, 0 };

bool JSSVGGradientElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGGradientElementConstructor, DOMObject>(exec, &JSSVGGradientElementConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGGradientElementPrototypeTableValues[6] =
{
    { "SVG_SPREADMETHOD_UNKNOWN", DontDelete|ReadOnly, (intptr_t)jsSVGGradientElementSVG_SPREADMETHOD_UNKNOWN, (intptr_t)0 },
    { "SVG_SPREADMETHOD_PAD", DontDelete|ReadOnly, (intptr_t)jsSVGGradientElementSVG_SPREADMETHOD_PAD, (intptr_t)0 },
    { "SVG_SPREADMETHOD_REFLECT", DontDelete|ReadOnly, (intptr_t)jsSVGGradientElementSVG_SPREADMETHOD_REFLECT, (intptr_t)0 },
    { "SVG_SPREADMETHOD_REPEAT", DontDelete|ReadOnly, (intptr_t)jsSVGGradientElementSVG_SPREADMETHOD_REPEAT, (intptr_t)0 },
    { "getPresentationAttribute", DontDelete|Function, (intptr_t)jsSVGGradientElementPrototypeFunctionGetPresentationAttribute, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGGradientElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 31, JSSVGGradientElementPrototypeTableValues, 0 };
#else
    { 17, 15, JSSVGGradientElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGGradientElementPrototype::s_info = { "SVGGradientElementPrototype", 0, &JSSVGGradientElementPrototypeTable, 0 };

JSObject* JSSVGGradientElementPrototype::self(ExecState* exec)
{
    return getDOMPrototype<JSSVGGradientElement>(exec);
}

bool JSSVGGradientElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSSVGGradientElementPrototype, JSObject>(exec, &JSSVGGradientElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGGradientElement::s_info = { "SVGGradientElement", &JSSVGElement::s_info, &JSSVGGradientElementTable, 0 };

JSSVGGradientElement::JSSVGGradientElement(PassRefPtr<Structure> structure, PassRefPtr<SVGGradientElement> impl)
    : JSSVGElement(structure, impl)
{
}

JSObject* JSSVGGradientElement::createPrototype(ExecState* exec)
{
    return new (exec) JSSVGGradientElementPrototype(JSSVGGradientElementPrototype::createStructure(JSSVGElementPrototype::self(exec)));
}

bool JSSVGGradientElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGGradientElement, Base>(exec, &JSSVGGradientElementTable, this, propertyName, slot);
}

JSValuePtr jsSVGGradientElementGradientUnits(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGGradientElement* imp = static_cast<SVGGradientElement*>(static_cast<JSSVGGradientElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedEnumeration> obj = imp->gradientUnitsAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGGradientElementGradientTransform(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGGradientElement* imp = static_cast<SVGGradientElement*>(static_cast<JSSVGGradientElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedTransformList> obj = imp->gradientTransformAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGGradientElementSpreadMethod(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGGradientElement* imp = static_cast<SVGGradientElement*>(static_cast<JSSVGGradientElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedEnumeration> obj = imp->spreadMethodAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGGradientElementHref(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGGradientElement* imp = static_cast<SVGGradientElement*>(static_cast<JSSVGGradientElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedString> obj = imp->hrefAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGGradientElementExternalResourcesRequired(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGGradientElement* imp = static_cast<SVGGradientElement*>(static_cast<JSSVGGradientElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGGradientElementClassName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGGradientElement* imp = static_cast<SVGGradientElement*>(static_cast<JSSVGGradientElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGGradientElementStyle(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGGradientElement* imp = static_cast<SVGGradientElement*>(static_cast<JSSVGGradientElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->style()));
}

JSValuePtr jsSVGGradientElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSSVGGradientElement*>(asObject(slot.slotBase()))->getConstructor(exec);
}
JSValuePtr JSSVGGradientElement::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSSVGGradientElementConstructor>(exec);
}

JSValuePtr jsSVGGradientElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGGradientElement::s_info))
        return throwError(exec, TypeError);
    JSSVGGradientElement* castedThisObj = static_cast<JSSVGGradientElement*>(asObject(thisValue));
    SVGGradientElement* imp = static_cast<SVGGradientElement*>(castedThisObj->impl());
    const UString& name = args.at(exec, 0)->toString(exec);


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}

// Constant getters

JSValuePtr jsSVGGradientElementSVG_SPREADMETHOD_UNKNOWN(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(0));
}

JSValuePtr jsSVGGradientElementSVG_SPREADMETHOD_PAD(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(1));
}

JSValuePtr jsSVGGradientElementSVG_SPREADMETHOD_REFLECT(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(2));
}

JSValuePtr jsSVGGradientElementSVG_SPREADMETHOD_REPEAT(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(3));
}


}

#endif // ENABLE(SVG)