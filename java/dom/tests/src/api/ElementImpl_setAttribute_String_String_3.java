/**
 *
 *  @version 1.00 
 *  @author Raju Pallath
 *
 *  TESTID 
 * 
 *  Tests out the ElementImpl->setAttribute(dummystr, 1) method.
 *
 */
package org.mozilla.dom.test;

import java.util.*;
import java.io.*;
import org.mozilla.dom.test.*;
import org.mozilla.dom.*;
import org.w3c.dom.*;

public class ElementImpl_setAttribute_String_String_3 extends BWBaseTest implements Execution
{

   /**
    *
    ***********************************************************
    *  Constructor
    ***********************************************************
    *
    */
   public ElementImpl_setAttribute_String_String_3()
   {
   }


   /**
    *
    ***********************************************************
    *  Starting point of application
    *
    *  @param   args    Array of command line arguments
    *
    ***********************************************************
    */
   public static void main(String[] args)
   {
   }

   /**
    ***********************************************************
    *
    *  Execute Method 
    *
    *  @param   tobj    Object reference (Node/Document/...)
    *  @return          true or false  depending on whether test passed or failed.
    *
    ***********************************************************
    */
   public boolean execute(Object tobj)
   {
      if (tobj == null)  {
           TestLoader.logPrint("Object is NULL...");
           return BWBaseTest.FAILED;
      }

      String os = System.getProperty("OS");
      osRoutine(os);

      Document d = (Document)tobj;
      if (d != null)
      {
	     Attr a  = d.createAttribute("dummyattr_7");
	     if (a == null) {
                TestLoader.logErrPrint("Document createAttribute FAILED... ");
                return BWBaseTest.FAILED;
	     }

             Element e = d.getDocumentElement();
	     if (e == null) {
                TestLoader.logErrPrint("Document Element is  NULL..");
                return BWBaseTest.FAILED;
             } else {
                e.setAttribute("dummyattr_7", "1");
		String str = e.getAttribute("dummyattr_7");
		if (str == null || (str.compareTo("1") != 0)) {
                  TestLoader.logErrPrint("Element 'setAttribute(dummyattr_7,1) FAILED... ");
                  return BWBaseTest.FAILED;
                } 
             }
      } else {
             System.out.println("Document is  NULL..");
             return BWBaseTest.FAILED;
      }

      return BWBaseTest.PASSED;
   }

   /**
    *
    ***********************************************************
    *  Routine where OS specific checks are made. 
    *
    *  @param   os      OS Name (SunOS/Linus/MacOS/...)
    ***********************************************************
    *
    */
   private void osRoutine(String os)
   {
     if(os == null) return;

     os = os.trim();
     if(os.compareTo("SunOS") == 0) {}
     else if(os.compareTo("Linux") == 0) {}
     else if(os.compareTo("Windows") == 0) {}
     else if(os.compareTo("MacOS") == 0) {}
     else {}
   }
}
