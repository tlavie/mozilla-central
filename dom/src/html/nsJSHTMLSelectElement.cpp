/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*-
 *
 * The contents of this file are subject to the Netscape Public
 * License Version 1.1 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy of
 * the License at http://www.mozilla.org/NPL/
 *
 * Software distributed under the License is distributed on an "AS
 * IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
 * implied. See the License for the specific language governing
 * rights and limitations under the License.
 *
 * The Original Code is mozilla.org code.
 *
 * The Initial Developer of the Original Code is Netscape
 * Communications Corporation.  Portions created by Netscape are
 * Copyright (C) 1998 Netscape Communications Corporation. All
 * Rights Reserved.
 *
 * Contributor(s): 
 */
/* AUTO-GENERATED. DO NOT EDIT!!! */

#include "jsapi.h"
#include "nsJSUtils.h"
#include "nsDOMError.h"
#include "nscore.h"
#include "nsIServiceManager.h"
#include "nsIScriptContext.h"
#include "nsIScriptSecurityManager.h"
#include "nsIJSScriptObject.h"
#include "nsIScriptObjectOwner.h"
#include "nsIScriptGlobalObject.h"
#include "nsCOMPtr.h"
#include "nsDOMPropEnums.h"
#include "nsString.h"
#include "nsIDOMHTMLSelectElement.h"
#include "nsIDOMElement.h"
#include "nsIDOMHTMLElement.h"
#include "nsIDOMHTMLFormElement.h"
#include "nsIDOMNSHTMLSelectElement.h"
#include "nsIDOMHTMLCollection.h"


static NS_DEFINE_IID(kIScriptObjectOwnerIID, NS_ISCRIPTOBJECTOWNER_IID);
static NS_DEFINE_IID(kIJSScriptObjectIID, NS_IJSSCRIPTOBJECT_IID);
static NS_DEFINE_IID(kIScriptGlobalObjectIID, NS_ISCRIPTGLOBALOBJECT_IID);
static NS_DEFINE_IID(kIHTMLSelectElementIID, NS_IDOMHTMLSELECTELEMENT_IID);
static NS_DEFINE_IID(kIElementIID, NS_IDOMELEMENT_IID);
static NS_DEFINE_IID(kIHTMLElementIID, NS_IDOMHTMLELEMENT_IID);
static NS_DEFINE_IID(kIHTMLFormElementIID, NS_IDOMHTMLFORMELEMENT_IID);
static NS_DEFINE_IID(kINSHTMLSelectElementIID, NS_IDOMNSHTMLSELECTELEMENT_IID);
static NS_DEFINE_IID(kIHTMLCollectionIID, NS_IDOMHTMLCOLLECTION_IID);

//
// HTMLSelectElement property ids
//
enum HTMLSelectElement_slots {
  HTMLSELECTELEMENT_TYPE = -1,
  HTMLSELECTELEMENT_SELECTEDINDEX = -2,
  HTMLSELECTELEMENT_VALUE = -3,
  HTMLSELECTELEMENT_LENGTH = -4,
  HTMLSELECTELEMENT_FORM = -5,
  HTMLSELECTELEMENT_OPTIONS = -6,
  HTMLSELECTELEMENT_DISABLED = -7,
  HTMLSELECTELEMENT_MULTIPLE = -8,
  HTMLSELECTELEMENT_NAME = -9,
  HTMLSELECTELEMENT_SIZE = -10,
  HTMLSELECTELEMENT_TABINDEX = -11
};

/***********************************************************************/
//
// HTMLSelectElement Properties Getter
//
PR_STATIC_CALLBACK(JSBool)
GetHTMLSelectElementProperty(JSContext *cx, JSObject *obj, jsval id, jsval *vp)
{
  nsIDOMHTMLSelectElement *a = (nsIDOMHTMLSelectElement*)nsJSUtils::nsGetNativeThis(cx, obj);

  // If there's no private data, this must be the prototype, so ignore
  if (nsnull == a) {
    return JS_TRUE;
  }

  if (JSVAL_IS_INT(id)) {
    nsresult rv;
    NS_WITH_SERVICE(nsIScriptSecurityManager, secMan,
                    NS_SCRIPTSECURITYMANAGER_PROGID, &rv);
    if (NS_FAILED(rv)) {
      return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECMAN_ERR);
    }
    switch(JSVAL_TO_INT(id)) {
      case HTMLSELECTELEMENT_TYPE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_TYPE, PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetType(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, obj, result);
        }
        break;
      }
      case HTMLSELECTELEMENT_SELECTEDINDEX:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_SELECTEDINDEX, PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
        }
        PRInt32 prop;
        nsresult result = NS_OK;
        result = a->GetSelectedIndex(&prop);
        if (NS_SUCCEEDED(result)) {
          *vp = INT_TO_JSVAL(prop);
        }
        else {
          return nsJSUtils::nsReportError(cx, obj, result);
        }
        break;
      }
      case HTMLSELECTELEMENT_VALUE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_VALUE, PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetValue(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, obj, result);
        }
        break;
      }
      case HTMLSELECTELEMENT_LENGTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_LENGTH, PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
        }
        PRUint32 prop;
        nsresult result = NS_OK;
        result = a->GetLength(&prop);
        if (NS_SUCCEEDED(result)) {
          *vp = INT_TO_JSVAL(prop);
        }
        else {
          return nsJSUtils::nsReportError(cx, obj, result);
        }
        break;
      }
      case HTMLSELECTELEMENT_FORM:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_FORM, PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsIDOMHTMLFormElement* prop;
        nsresult result = NS_OK;
        result = a->GetForm(&prop);
        if (NS_SUCCEEDED(result)) {
          // get the js object
          nsJSUtils::nsConvertObjectToJSVal((nsISupports *)prop, cx, obj, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, obj, result);
        }
        break;
      }
      case HTMLSELECTELEMENT_OPTIONS:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_OPTIONS, PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsIDOMHTMLCollection* prop;
        nsresult result = NS_OK;
        result = a->GetOptions(&prop);
        if (NS_SUCCEEDED(result)) {
          // get the js object
          nsJSUtils::nsConvertObjectToJSVal((nsISupports *)prop, cx, obj, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, obj, result);
        }
        break;
      }
      case HTMLSELECTELEMENT_DISABLED:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_DISABLED, PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
        }
        PRBool prop;
        nsresult result = NS_OK;
        result = a->GetDisabled(&prop);
        if (NS_SUCCEEDED(result)) {
          *vp = BOOLEAN_TO_JSVAL(prop);
        }
        else {
          return nsJSUtils::nsReportError(cx, obj, result);
        }
        break;
      }
      case HTMLSELECTELEMENT_MULTIPLE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_MULTIPLE, PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
        }
        PRBool prop;
        nsresult result = NS_OK;
        result = a->GetMultiple(&prop);
        if (NS_SUCCEEDED(result)) {
          *vp = BOOLEAN_TO_JSVAL(prop);
        }
        else {
          return nsJSUtils::nsReportError(cx, obj, result);
        }
        break;
      }
      case HTMLSELECTELEMENT_NAME:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_NAME, PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetName(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, obj, result);
        }
        break;
      }
      case HTMLSELECTELEMENT_SIZE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_SIZE, PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
        }
        PRInt32 prop;
        nsresult result = NS_OK;
        result = a->GetSize(&prop);
        if (NS_SUCCEEDED(result)) {
          *vp = INT_TO_JSVAL(prop);
        }
        else {
          return nsJSUtils::nsReportError(cx, obj, result);
        }
        break;
      }
      case HTMLSELECTELEMENT_TABINDEX:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_TABINDEX, PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
        }
        PRInt32 prop;
        nsresult result = NS_OK;
        result = a->GetTabIndex(&prop);
        if (NS_SUCCEEDED(result)) {
          *vp = INT_TO_JSVAL(prop);
        }
        else {
          return nsJSUtils::nsReportError(cx, obj, result);
        }
        break;
      }
      default:
      {
        nsIDOMElement* prop;
        nsIDOMNSHTMLSelectElement* b;
        if (NS_OK == a->QueryInterface(kINSHTMLSelectElementIID, (void **)&b)) {
          nsresult result = NS_OK;
          result = b->Item(JSVAL_TO_INT(id), &prop);
          if (NS_SUCCEEDED(result)) {
          // get the js object
          nsJSUtils::nsConvertObjectToJSVal((nsISupports *)prop, cx, obj, vp);
            NS_RELEASE(b);
          }
          else {
            NS_RELEASE(b);
            return nsJSUtils::nsReportError(cx, obj, result);
          }
        }
        else {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_WRONG_TYPE_ERR);
        }
      }
    }
  }
  else {
    return nsJSUtils::nsCallJSScriptObjectGetProperty(a, cx, obj, id, vp);
  }

  return PR_TRUE;
}

/***********************************************************************/
//
// HTMLSelectElement Properties Setter
//
PR_STATIC_CALLBACK(JSBool)
SetHTMLSelectElementProperty(JSContext *cx, JSObject *obj, jsval id, jsval *vp)
{
  nsIDOMHTMLSelectElement *a = (nsIDOMHTMLSelectElement*)nsJSUtils::nsGetNativeThis(cx, obj);

  // If there's no private data, this must be the prototype, so ignore
  if (nsnull == a) {
    return JS_TRUE;
  }

  if (JSVAL_IS_INT(id)) {
    nsresult rv;
    NS_WITH_SERVICE(nsIScriptSecurityManager, secMan,
                    NS_SCRIPTSECURITYMANAGER_PROGID, &rv);
    if (NS_FAILED(rv)) {
      return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECMAN_ERR);
    }
    switch(JSVAL_TO_INT(id)) {
      case HTMLSELECTELEMENT_SELECTEDINDEX:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_SELECTEDINDEX, PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
        }
        PRInt32 prop;
        int32 temp;
        if (JSVAL_IS_NUMBER(*vp) && JS_ValueToInt32(cx, *vp, &temp)) {
          prop = (PRInt32)temp;
        }
        else {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_NOT_NUMBER_ERR);
        }
      
        a->SetSelectedIndex(prop);
        
        break;
      }
      case HTMLSELECTELEMENT_VALUE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_VALUE, PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetValue(prop);
        
        break;
      }
      case HTMLSELECTELEMENT_DISABLED:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_DISABLED, PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
        }
        PRBool prop;
        if (PR_FALSE == nsJSUtils::nsConvertJSValToBool(&prop, cx, *vp)) {
          return nsJSUtils::nsReportError(cx, obj,  NS_ERROR_DOM_NOT_BOOLEAN_ERR);
        }
      
        a->SetDisabled(prop);
        
        break;
      }
      case HTMLSELECTELEMENT_MULTIPLE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_MULTIPLE, PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
        }
        PRBool prop;
        if (PR_FALSE == nsJSUtils::nsConvertJSValToBool(&prop, cx, *vp)) {
          return nsJSUtils::nsReportError(cx, obj,  NS_ERROR_DOM_NOT_BOOLEAN_ERR);
        }
      
        a->SetMultiple(prop);
        
        break;
      }
      case HTMLSELECTELEMENT_NAME:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_NAME, PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetName(prop);
        
        break;
      }
      case HTMLSELECTELEMENT_SIZE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_SIZE, PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
        }
        PRInt32 prop;
        int32 temp;
        if (JSVAL_IS_NUMBER(*vp) && JS_ValueToInt32(cx, *vp, &temp)) {
          prop = (PRInt32)temp;
        }
        else {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_NOT_NUMBER_ERR);
        }
      
        a->SetSize(prop);
        
        break;
      }
      case HTMLSELECTELEMENT_TABINDEX:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_TABINDEX, PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
        }
        PRInt32 prop;
        int32 temp;
        if (JSVAL_IS_NUMBER(*vp) && JS_ValueToInt32(cx, *vp, &temp)) {
          prop = (PRInt32)temp;
        }
        else {
          return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_NOT_NUMBER_ERR);
        }
      
        a->SetTabIndex(prop);
        
        break;
      }
      default:
        return nsJSUtils::nsCallJSScriptObjectSetProperty(a, cx, obj, id, vp);
    }
  }
  else {
    return nsJSUtils::nsCallJSScriptObjectSetProperty(a, cx, obj, id, vp);
  }

  return PR_TRUE;
}


//
// HTMLSelectElement finalizer
//
PR_STATIC_CALLBACK(void)
FinalizeHTMLSelectElement(JSContext *cx, JSObject *obj)
{
  nsJSUtils::nsGenericFinalize(cx, obj);
}


//
// HTMLSelectElement enumerate
//
PR_STATIC_CALLBACK(JSBool)
EnumerateHTMLSelectElement(JSContext *cx, JSObject *obj)
{
  return nsJSUtils::nsGenericEnumerate(cx, obj);
}


//
// HTMLSelectElement resolve
//
PR_STATIC_CALLBACK(JSBool)
ResolveHTMLSelectElement(JSContext *cx, JSObject *obj, jsval id)
{
  return nsJSUtils::nsGenericResolve(cx, obj, id);
}


//
// Native method Add
//
PR_STATIC_CALLBACK(JSBool)
HTMLSelectElementAdd(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
  nsIDOMHTMLSelectElement *nativeThis = (nsIDOMHTMLSelectElement*)nsJSUtils::nsGetNativeThis(cx, obj);
  nsresult result = NS_OK;
  nsCOMPtr<nsIDOMHTMLElement> b0;
  nsCOMPtr<nsIDOMHTMLElement> b1;
  // If there's no private data, this must be the prototype, so ignore
  if (nsnull == nativeThis) {
    return JS_TRUE;
  }

  {

  *rval = JSVAL_NULL;

  {
    PRBool ok;
    nsresult rv;
    NS_WITH_SERVICE(nsIScriptSecurityManager, secMan,
                    NS_SCRIPTSECURITYMANAGER_PROGID, &rv);
    if (NS_FAILED(rv)) {
      return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECMAN_ERR);
    }
    secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_ADD, PR_FALSE, &ok);
    if (!ok) {
      return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
    }
  }

    if (argc < 2) {
      return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_TOO_FEW_PARAMETERS_ERR);
    }

    if (JS_FALSE == nsJSUtils::nsConvertJSValToObject((nsISupports **)(void**)getter_AddRefs(b0),
                                           kIHTMLElementIID,
                                           "HTMLElement",
                                           cx,
                                           argv[0])) {
      return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_NOT_OBJECT_ERR);
    }
    if (JS_FALSE == nsJSUtils::nsConvertJSValToObject((nsISupports **)(void**)getter_AddRefs(b1),
                                           kIHTMLElementIID,
                                           "HTMLElement",
                                           cx,
                                           argv[1])) {
      return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_NOT_OBJECT_ERR);
    }

    result = nativeThis->Add(b0, b1);
    if (NS_FAILED(result)) {
      return nsJSUtils::nsReportError(cx, obj, result);
    }

    *rval = JSVAL_VOID;
  }

  return JS_TRUE;
}


//
// Native method Remove
//
PR_STATIC_CALLBACK(JSBool)
HTMLSelectElementRemove(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
  nsIDOMHTMLSelectElement *nativeThis = (nsIDOMHTMLSelectElement*)nsJSUtils::nsGetNativeThis(cx, obj);
  nsresult result = NS_OK;
  PRInt32 b0;
  // If there's no private data, this must be the prototype, so ignore
  if (nsnull == nativeThis) {
    return JS_TRUE;
  }

  {

  *rval = JSVAL_NULL;

  {
    PRBool ok;
    nsresult rv;
    NS_WITH_SERVICE(nsIScriptSecurityManager, secMan,
                    NS_SCRIPTSECURITYMANAGER_PROGID, &rv);
    if (NS_FAILED(rv)) {
      return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECMAN_ERR);
    }
    secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_REMOVE, PR_FALSE, &ok);
    if (!ok) {
      return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
    }
  }

    if (argc < 1) {
      return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_TOO_FEW_PARAMETERS_ERR);
    }

    if (!JS_ValueToInt32(cx, argv[0], (int32 *)&b0)) {
      return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_NOT_NUMBER_ERR);
    }

    result = nativeThis->Remove(b0);
    if (NS_FAILED(result)) {
      return nsJSUtils::nsReportError(cx, obj, result);
    }

    *rval = JSVAL_VOID;
  }

  return JS_TRUE;
}


//
// Native method Blur
//
PR_STATIC_CALLBACK(JSBool)
HTMLSelectElementBlur(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
  nsIDOMHTMLSelectElement *nativeThis = (nsIDOMHTMLSelectElement*)nsJSUtils::nsGetNativeThis(cx, obj);
  nsresult result = NS_OK;
  // If there's no private data, this must be the prototype, so ignore
  if (nsnull == nativeThis) {
    return JS_TRUE;
  }

  {

  *rval = JSVAL_NULL;

  {
    PRBool ok;
    nsresult rv;
    NS_WITH_SERVICE(nsIScriptSecurityManager, secMan,
                    NS_SCRIPTSECURITYMANAGER_PROGID, &rv);
    if (NS_FAILED(rv)) {
      return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECMAN_ERR);
    }
    secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_BLUR, PR_FALSE, &ok);
    if (!ok) {
      return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
    }
  }


    result = nativeThis->Blur();
    if (NS_FAILED(result)) {
      return nsJSUtils::nsReportError(cx, obj, result);
    }

    *rval = JSVAL_VOID;
  }

  return JS_TRUE;
}


//
// Native method Focus
//
PR_STATIC_CALLBACK(JSBool)
HTMLSelectElementFocus(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
  nsIDOMHTMLSelectElement *nativeThis = (nsIDOMHTMLSelectElement*)nsJSUtils::nsGetNativeThis(cx, obj);
  nsresult result = NS_OK;
  // If there's no private data, this must be the prototype, so ignore
  if (nsnull == nativeThis) {
    return JS_TRUE;
  }

  {

  *rval = JSVAL_NULL;

  {
    PRBool ok;
    nsresult rv;
    NS_WITH_SERVICE(nsIScriptSecurityManager, secMan,
                    NS_SCRIPTSECURITYMANAGER_PROGID, &rv);
    if (NS_FAILED(rv)) {
      return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECMAN_ERR);
    }
    secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_HTMLSELECTELEMENT_FOCUS, PR_FALSE, &ok);
    if (!ok) {
      return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
    }
  }


    result = nativeThis->Focus();
    if (NS_FAILED(result)) {
      return nsJSUtils::nsReportError(cx, obj, result);
    }

    *rval = JSVAL_VOID;
  }

  return JS_TRUE;
}


//
// Native method Item
//
PR_STATIC_CALLBACK(JSBool)
NSHTMLSelectElementItem(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
  nsIDOMHTMLSelectElement *privateThis = (nsIDOMHTMLSelectElement*)nsJSUtils::nsGetNativeThis(cx, obj);
  nsCOMPtr<nsIDOMNSHTMLSelectElement> nativeThis;
  nsresult result = NS_OK;
  if (NS_OK != privateThis->QueryInterface(kINSHTMLSelectElementIID, getter_AddRefs(nativeThis))) {
    return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_WRONG_TYPE_ERR);
  }

  nsIDOMElement* nativeRet;
  PRUint32 b0;
  // If there's no private data, this must be the prototype, so ignore
  if (!nativeThis) {
    return JS_TRUE;
  }

  {

  *rval = JSVAL_NULL;

  {
    PRBool ok;
    nsresult rv;
    NS_WITH_SERVICE(nsIScriptSecurityManager, secMan,
                    NS_SCRIPTSECURITYMANAGER_PROGID, &rv);
    if (NS_FAILED(rv)) {
      return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECMAN_ERR);
    }
    secMan->CheckScriptAccess(cx, obj, NS_DOM_PROP_NSHTMLSELECTELEMENT_ITEM, PR_FALSE, &ok);
    if (!ok) {
      return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_SECURITY_ERR);
    }
  }

    if (argc < 1) {
      return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_TOO_FEW_PARAMETERS_ERR);
    }

    if (!JS_ValueToInt32(cx, argv[0], (int32 *)&b0)) {
      return nsJSUtils::nsReportError(cx, obj, NS_ERROR_DOM_NOT_NUMBER_ERR);
    }

    result = nativeThis->Item(b0, &nativeRet);
    if (NS_FAILED(result)) {
      return nsJSUtils::nsReportError(cx, obj, result);
    }

    nsJSUtils::nsConvertObjectToJSVal(nativeRet, cx, obj, rval);
  }

  return JS_TRUE;
}


/***********************************************************************/
//
// class for HTMLSelectElement
//
JSClass HTMLSelectElementClass = {
  "HTMLSelectElement", 
  JSCLASS_HAS_PRIVATE | JSCLASS_PRIVATE_IS_NSISUPPORTS,
  JS_PropertyStub,
  JS_PropertyStub,
  GetHTMLSelectElementProperty,
  SetHTMLSelectElementProperty,
  EnumerateHTMLSelectElement,
  ResolveHTMLSelectElement,
  JS_ConvertStub,
  FinalizeHTMLSelectElement
};


//
// HTMLSelectElement class properties
//
static JSPropertySpec HTMLSelectElementProperties[] =
{
  {"type",    HTMLSELECTELEMENT_TYPE,    JSPROP_ENUMERATE | JSPROP_READONLY},
  {"selectedIndex",    HTMLSELECTELEMENT_SELECTEDINDEX,    JSPROP_ENUMERATE},
  {"value",    HTMLSELECTELEMENT_VALUE,    JSPROP_ENUMERATE},
  {"length",    HTMLSELECTELEMENT_LENGTH,    JSPROP_ENUMERATE | JSPROP_READONLY},
  {"form",    HTMLSELECTELEMENT_FORM,    JSPROP_ENUMERATE | JSPROP_READONLY},
  {"options",    HTMLSELECTELEMENT_OPTIONS,    JSPROP_ENUMERATE | JSPROP_READONLY},
  {"disabled",    HTMLSELECTELEMENT_DISABLED,    JSPROP_ENUMERATE},
  {"multiple",    HTMLSELECTELEMENT_MULTIPLE,    JSPROP_ENUMERATE},
  {"name",    HTMLSELECTELEMENT_NAME,    JSPROP_ENUMERATE},
  {"size",    HTMLSELECTELEMENT_SIZE,    JSPROP_ENUMERATE},
  {"tabIndex",    HTMLSELECTELEMENT_TABINDEX,    JSPROP_ENUMERATE},
  {0}
};


//
// HTMLSelectElement class methods
//
static JSFunctionSpec HTMLSelectElementMethods[] = 
{
  {"add",          HTMLSelectElementAdd,     2},
  {"remove",          HTMLSelectElementRemove,     1},
  {"blur",          HTMLSelectElementBlur,     0},
  {"focus",          HTMLSelectElementFocus,     0},
  {"item",          NSHTMLSelectElementItem,     1},
  {0}
};


//
// HTMLSelectElement constructor
//
PR_STATIC_CALLBACK(JSBool)
HTMLSelectElement(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
  return JS_FALSE;
}


//
// HTMLSelectElement class initialization
//
extern "C" NS_DOM nsresult NS_InitHTMLSelectElementClass(nsIScriptContext *aContext, void **aPrototype)
{
  JSContext *jscontext = (JSContext *)aContext->GetNativeContext();
  JSObject *proto = nsnull;
  JSObject *constructor = nsnull;
  JSObject *parent_proto = nsnull;
  JSObject *global = JS_GetGlobalObject(jscontext);
  jsval vp;

  if ((PR_TRUE != JS_LookupProperty(jscontext, global, "HTMLSelectElement", &vp)) ||
      !JSVAL_IS_OBJECT(vp) ||
      ((constructor = JSVAL_TO_OBJECT(vp)) == nsnull) ||
      (PR_TRUE != JS_LookupProperty(jscontext, JSVAL_TO_OBJECT(vp), "prototype", &vp)) || 
      !JSVAL_IS_OBJECT(vp)) {

    if (NS_OK != NS_InitHTMLElementClass(aContext, (void **)&parent_proto)) {
      return NS_ERROR_FAILURE;
    }
    proto = JS_InitClass(jscontext,     // context
                         global,        // global object
                         parent_proto,  // parent proto 
                         &HTMLSelectElementClass,      // JSClass
                         HTMLSelectElement,            // JSNative ctor
                         0,             // ctor args
                         HTMLSelectElementProperties,  // proto props
                         HTMLSelectElementMethods,     // proto funcs
                         nsnull,        // ctor props (static)
                         nsnull);       // ctor funcs (static)
    if (nsnull == proto) {
      return NS_ERROR_FAILURE;
    }

  }
  else if ((nsnull != constructor) && JSVAL_IS_OBJECT(vp)) {
    proto = JSVAL_TO_OBJECT(vp);
  }
  else {
    return NS_ERROR_FAILURE;
  }

  if (aPrototype) {
    *aPrototype = proto;
  }
  return NS_OK;
}


//
// Method for creating a new HTMLSelectElement JavaScript object
//
extern "C" NS_DOM nsresult NS_NewScriptHTMLSelectElement(nsIScriptContext *aContext, nsISupports *aSupports, nsISupports *aParent, void **aReturn)
{
  NS_PRECONDITION(nsnull != aContext && nsnull != aSupports && nsnull != aReturn, "null argument to NS_NewScriptHTMLSelectElement");
  JSObject *proto;
  JSObject *parent;
  nsIScriptObjectOwner *owner;
  JSContext *jscontext = (JSContext *)aContext->GetNativeContext();
  nsresult result = NS_OK;
  nsIDOMHTMLSelectElement *aHTMLSelectElement;

  if (nsnull == aParent) {
    parent = nsnull;
  }
  else if (NS_OK == aParent->QueryInterface(kIScriptObjectOwnerIID, (void**)&owner)) {
    if (NS_OK != owner->GetScriptObject(aContext, (void **)&parent)) {
      NS_RELEASE(owner);
      return NS_ERROR_FAILURE;
    }
    NS_RELEASE(owner);
  }
  else {
    return NS_ERROR_FAILURE;
  }

  if (NS_OK != NS_InitHTMLSelectElementClass(aContext, (void **)&proto)) {
    return NS_ERROR_FAILURE;
  }

  result = aSupports->QueryInterface(kIHTMLSelectElementIID, (void **)&aHTMLSelectElement);
  if (NS_OK != result) {
    return result;
  }

  // create a js object for this class
  *aReturn = JS_NewObject(jscontext, &HTMLSelectElementClass, proto, parent);
  if (nsnull != *aReturn) {
    // connect the native object to the js object
    JS_SetPrivate(jscontext, (JSObject *)*aReturn, aHTMLSelectElement);
  }
  else {
    NS_RELEASE(aHTMLSelectElement);
    return NS_ERROR_FAILURE; 
  }

  return NS_OK;
}
