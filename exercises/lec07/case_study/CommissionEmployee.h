// Fig. 11.12: CommissionEmployee.h
// CommissionEmployee class definition.
#ifndef COMMISSION_H
#define COMMISSION_H

#include "Employee.h"
#include <string> // C++ standard string class

class CommissionEmployee : public Employee {
public:
   CommissionEmployee(const std::string&, const std::string&,
      const std::string&, double = 0.0, double = 0.0);

   // virtual destructor needed
   virtual ~CommissionEmployee() = default;

   void setGrossSales(double); // set gross sales amount
   double getGrossSales() const; // return gross sales amount

   void setCommissionRate(double); // set commission rate (percentage)
   double getCommissionRate() const; // return commission rate


   virtual double earnings() const  override; // calculate earnings (Pure virtual function)
   virtual std::string toString() const override;

private:

   double grossSales; // gross weekly sales
   double commissionRate; // commission percentage
};

#endif



/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
