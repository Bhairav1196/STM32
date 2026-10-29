#include <gui/mainscreen_screen/MainScreenView.hpp>

MainScreenView::MainScreenView()
{

}

void MainScreenView::setupScreen()
{
    MainScreenViewBase::setupScreen();
}

void MainScreenView::tearDownScreen()
{
    MainScreenViewBase::tearDownScreen();
}

//**********Step 6 *************
// Add the following function to set the image visible when button is pressed

void MainScreenView::setLight(bool state){
	bulOnImage.setVisible(state);
	bulOnImage.invalidate();
}

