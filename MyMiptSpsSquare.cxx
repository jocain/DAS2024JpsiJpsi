/***************************************************************************** 
 * Project: RooFit                                                           * 
 *                                                                           * 
 * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/ 

// Your description goes here... 

#include "Riostream.h" 

#include "MyMiptSpsSquare.h" 
#include "RooAbsReal.h" 
#include "RooAbsCategory.h" 
#include <math.h> 
#include "TMath.h" 

#include <complex>
#include "SpsDpsFcn.h"

ClassImp(MyMiptSpsSquare); 

 MyMiptSpsSquare::MyMiptSpsSquare(const char *name, const char *title, 
                        RooAbsReal& _x,
                        RooAbsReal& _mth,
                        RooAbsReal& _mup,
                        RooAbsReal& _alpha,
                        RooAbsReal& _p1,
                        RooAbsReal& _p2,
                        RooAbsReal& _p3,
                        RooAbsReal& _coef,
                        RooAbsReal& _phi) :
   RooAbsPdf(name,title), 
   x("x","x",this,_x),
   mth("mth","mth",this,_mth),
   mup("mup","mup",this,_mup),
   alpha("alpha","alpha",this,_alpha),
   p1("p1","p1",this,_p1),
   p2("p2","p2",this,_p2),
   p3("p3","p3",this,_p3),
   coef("coef","coef",this,_coef),
   phi("phi","phi",this,_phi)
 { 
 } 


 MyMiptSpsSquare::MyMiptSpsSquare(const MyMiptSpsSquare& other, const char* name) :  
   RooAbsPdf(other,name), 
   x("x",this,other.x),
   mth("mth",this,other.mth),
   mup("mup",this,other.mup),
   alpha("alpha",this,other.alpha),
   p1("p1",this,other.p1),
   p2("p2",this,other.p2),
   p3("p3",this,other.p3),
   coef("coef",this,other.coef),
   phi("phi",this,other.phi)
 { 
 } 



 Double_t MyMiptSpsSquare::evaluate() const 
 { 
   // ENTER EXPRESSION IN TERMS OF VARIABLE ARGUMENTS HERE 
   double coef_ = coef;
   double phi_ = phi;
   std::complex<double> cpl = std::polar<double>(coef_, phi_);
   double rawSps = MiptSps(x, mth, mup, alpha, p1, p2, p3);
   double res = std::norm(cpl) * rawSps;
   return res;
 } 



