#include "FundsImp.h"
#include "servant/Application.h"

using namespace std;

//////////////////////////////////////////////////////
void FundsImp::initialize()
{
    //initialize servant here:
    //...
}

//////////////////////////////////////////////////////
void FundsImp::destroy()
{
    //destroy servant here:
    //...
}



int FundsImp::addFunds(const WmsPlatform::FundsNewUserReq& sIn, std::string& sOut, tars::TarsCurrentPtr current)
{

}

int FundsImp::getFunds(const WmsPlatform::FundsUserInfoReq& sIn, WmsPlatform::FundsUserInfoRes& sOut, tars::TarsCurrentPtr current)
{

}

int FundsImp::modifyFunds(const WmsPlatform::FundsUserModifyReq& sIn, std::string& sOut, tars::TarsCurrentPtr current)
{

}
