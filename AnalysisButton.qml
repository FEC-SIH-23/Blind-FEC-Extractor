// AnalyseButton.qml
// import QtQuick 2.15
import QtQuick 2.2
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3
import QtQuick.Dialogs
import QtCore

Rectangle {
    width: 125
    height: 125
    radius: 125 / 2
    color: "#FF5440"
    property alias buttonText: btext.text
    property alias imageSource: hotImage.source
    property int uploadFlag

    Image {
        id: hotImage
        width: 25 * 1.5
        height: 25 * 1.5
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        source: "analyse.svg"
    }

    Text {
        id: btext
        anchors.top: hotImage.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        font.pixelSize: 36/2
        color: "#1E1A1D"
        text: "Analyse"
    }

    MouseArea {
        id: mouse
        anchors.fill: parent
        onClicked: if ( uploadFlag === 0 ) {
            stackView.push("Loading.qml")
        }
        else {
            fileDialog.open()
            // stackView.push("Loading.qml")
        }
    }

    FileDialog {
        id: fileDialog
        currentFolder: StandardPaths.standardLocations(StandardPaths.PicturesLocation)[0]
        onAccepted: {
             console.log(selectedFile)
             stackView.push("Loading.qml")
        }
    }
}
