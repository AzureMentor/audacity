/**********************************************************************

  Audacity: A Digital Audio Editor

  EffectsPrefs.h

  Brian Gunlogson
  Joshua Haberman
  James Crook

**********************************************************************/

#ifndef __AUDACITY_EFFECTS_PREFS__
#define __AUDACITY_EFFECTS_PREFS__

#include <wx/defs.h>

#include "PrefsPanel.h"

class ChoiceSetting;
class ShuttleGui;

#define EFFECTS_PREFS_PLUGIN_SYMBOL ComponentInterfaceSymbol{ XO("Effects") }

class EffectsPrefs final : public PrefsPanel
{
 public:
   EffectsPrefs(wxWindow * parent, wxWindowID winid);
   ~EffectsPrefs();
   ComponentInterfaceSymbol GetSymbol() override;
   wxString GetDescription() override;

   bool Commit() override;
   wxString HelpPageName() override;
   void PopulateOrExchange(ShuttleGui & S) override;

 private:
   void Populate();
};

/// A PrefsPanel::Factory that creates one EffectsPrefs panel.
extern PrefsPanel::Factory EffectsPrefsFactory;

extern ChoiceSetting EffectsGroupBy;

#endif
