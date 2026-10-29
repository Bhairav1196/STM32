#include <gui/mainscreen_screen/MainScreenView.hpp>
#include <gui/mainscreen_screen/MainScreenPresenter.hpp>

MainScreenPresenter::MainScreenPresenter(MainScreenView& v)
    : view(v)
{

}

void MainScreenPresenter::activate()
{

}

void MainScreenPresenter::deactivate()
{

}


//************** Step 4*******************

// added following function and called "view" class
// go to MainScreenView.hpp to add the following function header  which is Step 5
void MainScreenPresenter::setLight(bool state){
	view.setLight(state);
}
