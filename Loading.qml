import QtQuick 2.0
import QtQuick.Controls 2.12
import QtQuick.Controls.Material 2.12

Rectangle {
    implicitHeight: parent.height
    implicitWidth: parent.width
    property int uploadFlag

    Connections {
        target: myObject
        function onMessageChanged(message) {
            window.inputText = message
        } 
    }

    Timer {
        id: dispensingTimer
        interval: 3000
        running: false
        onTriggered: stackView.push("FinishScreen.qml")
    }

    Component.onCompleted: {
        dispensingTimer.start()
        myObject.predict(window.inputText, uploadFlag)
    }

    id: mainBackground
    color:  "#e0111a"

    BusyIndicator {
        id: dispensingBusyIndicator
        anchors.centerIn: parent
        width: 281
        height: 281
        Material.accent: "#fbcec0"
    }

    Text {
        font.pixelSize: 96
        anchors {
            horizontalCenter: parent.horizontalCenter
            top: dispensingBusyIndicator.bottom
            topMargin: 15
        }

        color: "#fbcec0"
        text: "Analysing..."
    }
}
