import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Q_PROPERTY Demo")

    Column {
        spacing: 20

        Text {
            id: titleId
            width: 500
            text: Movie.title
            font.pointSize: 20
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Text {
            id: mainCharacterId
            width: 500
            text: Movie.mainCharacter
            font.pointSize: 20
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Row {
            TextField {
                id: titleTextFieldId
                width: 300
            }
            Button {
                id: btnChangeTitle
                width: 200
                text: "Change Title"
                onClicked: {
                    Movie.title = titleTextFieldId.text
                }
            }
        }
        Row {
            TextField {
                id: characterTextFieldId
                width: 300
            }
            Button {
                id: btnChangeCharacter
                width: 200
                text: "Change Character"
                onClicked: {
                    Movie.mainCharacter = characterTextFieldId.text
                }
            }
        }
    }
}
