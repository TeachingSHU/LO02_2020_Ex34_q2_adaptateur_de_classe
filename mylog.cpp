#include "mylog.h"
#include "evenement.h"

// 1 : Adaptateur de classe
/**/
void MyLog::addEvt(const TIME::Date& d, const TIME::Horaire& h,const string& s){
    *this << TIME::Evt1jDur(d,s,h,TIME::Duree(0));
}

// dynamic_cast : pour downcaster de Evt a une sous-classe
void MyLog::displayLog(std::ostream& f) const {
    for(TIME::Agenda::const_iterator it=cbegin(); it!=cend(); it++) {
        f << dynamic_cast<const TIME::Evt1j&>(*it).getDate() << " - "
          << dynamic_cast<const TIME::Evt1jDur&>(*it).getHoraire() << ":"
          << (*it).getDescription() << "\n";
    }
}
/**/


