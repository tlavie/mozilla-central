/**
 *
 *  @version 1.00 
 *  @author Raju Pallath
 *
 *  TESTID 
 * 
 *
 */
package org.mozilla.dom.test;

import java.util.*;
import java.io.*;
import org.mozilla.dom.test.*;
import org.mozilla.dom.*;
import org.w3c.dom.*;

public class NodeImpl_removeChild_Node_1 extends BWBaseTest implements Execution
{

   /**
    *
    ***********************************************************
    *  Constructor
    ***********************************************************
    *
    */
   public NodeImpl_removeChild_Node_1()
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
         String elname = "SCRIPT";
         Element e = d.createElement(elname);
         if (e == null)
         {
            TestLoader.logErrPrint("Could not create Element " + elname);
            return BWBaseTest.FAILED;
         }

         String nodename = "HEAD";
         NodeList nl = d.getElementsByTagName(nodename);
         if (nl != null) 
         {
            int len = nl.getLength();

            Node n = nl.item(0);
	    if (n.getNodeName().compareTo(nodename) == 0)
	    {
                Node iNode = n.appendChild(e);
		if (iNode == null)
                {
                   TestLoader.logErrPrint("Could not Append Child " + elname + "  to Node " + nodename);
                   return BWBaseTest.FAILED;
                }

                Node rNode = n.removeChild(iNode);
		if (rNode == null)
                {
                   TestLoader.logErrPrint("Node " + elname + "  could not be  removed from node " + nodename);
                   return BWBaseTest.FAILED;
                }
            }
         } else {
            TestLoader.logErrPrint("Could not find Node " + nodename);
            return BWBaseTest.FAILED;
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
