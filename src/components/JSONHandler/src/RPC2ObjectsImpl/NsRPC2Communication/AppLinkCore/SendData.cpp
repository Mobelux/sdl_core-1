#include "../src/include/JSONHandler/RPC2Objects/NsRPC2Communication/AppLinkCore/SendData.h"
#include "../src/include/JSONHandler/RPC2Objects//Marshaller.h"

/*
  interface	NsRPC2Communication::AppLinkCore
  version	1.2
  generated at	Fri Dec 14 12:58:14 2012
  source stamp	Fri Dec 14 12:58:07 2012
  author	robok0der
*/

using namespace NsRPC2Communication::AppLinkCore;


SendData& SendData::operator =(const SendData& c)
{
  data=c.data;
  if(url)  delete url;
  url= c.url ? new std::string(c.url[0]) : 0;
  if(timeout)  delete timeout;
  timeout= c.timeout ? new int(c.timeout[0]) : 0;
  appId=c.appId;
  return *this;
}


SendData::~SendData(void)
{
  if(url)  delete url;
  if(timeout)  delete timeout;
}


SendData::SendData(void) : 
  RPC2Request(Marshaller::METHOD_NSRPC2COMMUNICATION_APPLINKCORE__SENDDATA),
  url(0),
  timeout(0)
{
}


SendData::SendData(const SendData& c) : RPC2Request(Marshaller::METHOD_NSRPC2COMMUNICATION_APPLINKCORE__SENDDATA,c.getId())
{
  *this=c;
}


const std::vector< std::string>& SendData::get_data(void)
{
  return data;
}

bool SendData::set_data(const std::vector< std::string>& data_)
{
  data=data_;
  return true;
}

const std::string* SendData::get_url(void)
{
  return url;
}

bool SendData::set_url(const std::string& url_)
{
  if(url)  delete url;
  url=new std::string(url_);
  return true;
}

void SendData::reset_url(void)
{
  if(url)  delete url;
  url=0;
}

const int* SendData::get_timeout(void)
{
  return timeout;
}

bool SendData::set_timeout(const int& timeout_)
{
  if(timeout)  delete timeout;
  timeout=new int(timeout_);
  return true;
}

void SendData::reset_timeout(void)
{
  if(timeout)  delete timeout;
  timeout=0;
}

int SendData::get_appId(void)
{
  return appId;
}

bool SendData::set_appId(int appId_)
{
  appId=appId_;
  return true;
}

bool SendData::checkIntegrity(void)
{
  return SendDataMarshaller::checkIntegrity(*this);
}
