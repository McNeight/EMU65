#ifndef UIPROXYCOLLECTION_H
#define UIPROXYCOLLECTION_H

#include <memory>
#include "../globals.h"
//#include "leddisplayqtproxy.h"

class LedDisplayProxy;
class KeyboardProxy;
class Aim65Proxy;

class UiProxyCollection
{
public:
  static UiProxyCollection* GetInstance();
  LedDisplayProxy* GetLedDisplayProxy();
  KeyboardProxy* GetKeyboardProxy();
  Aim65Proxy* GetAim65Proxy();
  void InsertLedDisplayProxy(std::shared_ptr<LedDisplayProxy> proxy);
  void InsertKeyboardProxy(std::shared_ptr<KeyboardProxy> proxy);
  void InsertAim65Proxy(std::shared_ptr<Aim65Proxy> proxy);
private:
  static UiProxyCollection *m_instance;

  std::shared_ptr<LedDisplayProxy> m_ledProxy;
  std::shared_ptr<KeyboardProxy> m_keyboardProxy;
  std::shared_ptr<Aim65Proxy> m_aim65Proxy;

  UiProxyCollection();
  ~UiProxyCollection();

  DISALLOW_COPY_AND_ASSIGN(UiProxyCollection);
};

#endif /* UIPROXYCOLLECTION_H */
