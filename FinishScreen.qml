import QtQuick 2.0
Rectangle {

    Timer {
        id: finishTimer
        interval: 1500
        running: false
        onTriggered: {
            stackView.pop( null )
            
        }
    }

    Component.onCompleted: {
        textField.text = ""
        finishTimer.start()
        }


    id: mainBackground
    color: "#000746"

    Image {
        id: finishImage
        width: 256
        height: 256
        anchors.centerIn: parent
        source: "tickCold.png"
    }

    Text {
        anchors {
            horizontalCenter: parent.horizontalCenter
            top: finishImage.bottom
            topMargin: 20
        }
        font.pixelSize: 50
        color: "#fbcec0" 
        text: window.inputText + " Code Detected"
    }
}